import matplotlib.pyplot as plt

def plot_line_chart(file_path):
    # 读取文件
    with open(file_path, 'r') as file:
        lines = file.readlines()

    # 解析数据
    time_values = [float(line.split()[0]) for line in lines[0:]]
    data_values = [float(line.split()[1]) for line in lines[0:]]

    # 绘制折线图
    plt.plot(time_values, data_values, label='Data')
     
    # 添加标题和标签
    plt.title('Line Chart')
    plt.xlabel('Time')
    plt.ylabel('Alpha')

    # 显示图例
    plt.legend()

    # 显示图形
    plt.show()

# 替换 'your_file.txt' 为你的文件路径
plot_line_chart('alpha.txt')
