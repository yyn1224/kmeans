## 动态聚类工具
命令参数规范如下：

```
kmeans usage:
./kmeans -f [int] -k [int] -m [int] -n [int] -e [double] -d [string] -p [string] -o [string]
         -f dim
         -k max cluster
         -m thread count
         -n iteration
         -e min value for instance to be a new cluster
         -d input embeddings
         -p init centers
         -o output dir
```

## 额外说明：
输入文件需要是"\t"分割，维度依靠 -f 参数指定
需要向量是的模为 "1.0"

用来初始化的类中心文件用 -p 参数指定，格式与 -f 文件一样，注意与工具产生的cents文件略有不同（需要将cents文件的第一列去掉）。

有任何问题欢迎联系我，默认当你在使用这个工具的时候，一定知道"我"是谁。
