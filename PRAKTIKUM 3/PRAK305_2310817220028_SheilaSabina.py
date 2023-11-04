detik = int(input('Input\n'))

hari = detik // (24*3600)
detik = detik % (24*3600)
jam = detik // 3600
detik %= 3600
menit = detik//60
detik %= 60

if hari > 0:
    print(f"\nOutput\n{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"\nOutput\n{jam:02d}:{menit:02d}:{detik:02d}")