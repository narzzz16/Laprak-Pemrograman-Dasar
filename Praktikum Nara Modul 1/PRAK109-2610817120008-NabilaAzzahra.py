jumlah_pasukan = 958730
jumlah_pahlawan = 5

pasukan_per_pahlawan = jumlah_pasukan // jumlah_pahlawan

print("Jumlah pasukan yang dibawa Yu Zhong =", f"{jumlah_pasukan:,}".replace(",", "."))
print("Jumlah pahlawan =", jumlah_pahlawan)
print("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah", pasukan_per_pahlawan, "pasukan")