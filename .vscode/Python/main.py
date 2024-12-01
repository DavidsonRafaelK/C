import numpy as np
from scipy.stats import f
from tabulate import tabulate

# Data from the image
group_1 = [5.2, 4.7, 8.1, 6.2, 3.0]  # Garlon Level 1
group_2 = [9.1, 7.1, 8.2, 6.0, 9.1]  # Garlon Level 2
group_3 = [3.2, 5.8, 2.2, 3.1, 7.2]  # Garlon Level 3
group_4 = [2.4, 3.4, 4.1, 1.0, 4.0]  # Garlon Level 4
group_5 = [7.1, 6.6, 9.3, 4.2, 7.6]

# Organize data into groups
data = [group_1, group_2, group_3, group_4, group_5]

# Calculate group means and variances
group_means = [np.mean(group) for group in data]
group_variances = [np.var(group, ddof=1) for group in data]
group_sizes = [len(group) for group in data]

# Overall mean
overall_mean = np.mean([value for group in data for value in group])

# Between-group variance
between_group_variance = sum(
    n * (mean - overall_mean) ** 2 for n, mean in zip(group_sizes, group_means)
) / (len(data) - 1)

# Within-group variance
within_group_variance = sum(
    (n - 1) * var for n, var in zip(group_sizes, group_variances)
) / (sum(group_sizes) - len(data))

# F-statistic
f_stat = between_group_variance / within_group_variance

# Degrees of freedom
df_between = len(data) - 1
df_within = sum(group_sizes) - len(data)

# Critical F-value for α = 0.05
alpha = 0.05
f_critical = f.ppf(1 - alpha, df_between, df_within)

# Results table
results_table = [
    ["Step 1: Group Means", ", ".join(f"{mean:.3f}" for mean in group_means)],
    ["Step 2: Group Variances", ", ".join(f"{var:.3f}" for var in group_variances)],
    ["Step 3: Within-Group Variance", f"{within_group_variance:.3f}"],
    ["Step 4: Overall Mean", f"{overall_mean:.3f}"],
    ["Step 5: Between-Group Variance", f"{between_group_variance:.3f}"],
    ["Final Step: F-Statistic", f"{f_stat:.3f}"],
    ["Critical F-Value (α = 0.05)", f"{f_critical:.3f}"],
    ["Conclusion", "Reject H0" if f_stat > f_critical else "Fail to Reject H0"],
]

# Print as table
print(tabulate(results_table, headers=["Step", "Value"], tablefmt="fancy_grid"))