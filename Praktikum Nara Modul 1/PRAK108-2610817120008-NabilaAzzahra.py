import math

putaran = 5
jarak = 14

keliling = jarak / putaran
jari_jari = keliling / (2 * math.pi)

print("Diketahui :")
print("Pak Dengklek mengelilingi taman =", putaran, "Putaran")
print("Jarak tempuh Pak Dengklek =", jarak, "Kilometer")

print()
print("Jawaban :")
print("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer" % jari_jari)