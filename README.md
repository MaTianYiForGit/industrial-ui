# NUC977 工业控制 UI 项目

## 项目信息
- **目标芯片**: NUC977
- **液晶屏分辨率**: 800x480
- **导出方式**: C 代码
- **LVGL 版本**: 9.4.0

## 项目结构

```
industrial_ui/
├── project.xml              # 项目配置文件
├── globals.xml              # 全局资源（颜色、字体、样式）
├── components/              # 可复用组件
│   ├── param_item.xml      # 参数行组件（标签+数值+单位）
│   ├── status_btn.xml      # 状态按钮组件
│   ├── monitor_card.xml    # 监控卡片组件
│   └── nav_tab.xml         # 导航按钮组件
├── screens/                 # 屏幕定义
│   └── main_screen.xml     # 主控界面
├── fonts/                   # 字体文件（待添加）
├── images/                  # 图片资源（待添加）
└── preview-bin/             # 预览运行时文件
```

## 使用步骤

### 1. 在 LVGL Pro Editor 中打开项目

1. 启动 LVGL Pro Editor
2. 选择 **Open Project**
3. 浏览到 `industrial_ui` 目录并打开
4. Editor 会自动加载项目文件

### 2. 在编辑器中预览

- 左侧：项目文件树
- 中间：XML 编辑区（支持自动补全）
- 右侧：实时预览窗口
  - 按住 **Ctrl** 悬停在预览上可进入 Inspector 模式
  - 双击元素可跳转到对应 XML 代码

### 3. 导出 C 代码

完成 UI 设计后：

1. 在 Editor 菜单选择 **File → Export → C Code**
2. 选择导出目录
3. 生成的文件包括：
   - `ui_*.c` / `ui_*.h` - UI 代码
   - `ui_*_gen.c` / `ui_*_gen.h` - 自动生成的代码

### 4. 集成到 NUC977 项目

1. 将导出的 C/H 文件复制到你的 NUC977 工程
2. 在固件代码中包含头文件：
   ```c
   #include "ui_main_screen.h"
   ```
3. 初始化 LVGL 后加载主界面：
   ```c
   lv_init();
   // ... 初始化显示驱动 ...
   lv_obj_t *screen = create_main_screen();
   lv_scr_load(screen);
   ```

## 界面布局说明

### 顶部状态栏（50px）
- **左侧**: 联机/运行/本地 三个状态按钮
- **中间**: 故障代码显示区域
- **右侧**: 时间显示 + 厂家信息按钮

### 中间内容区（350px）
- **左侧列（280px）**: 9 个参数行（输出能量、电压、电流等）
- **中间列（260px）**: 绿色监控卡片（参数号）+ 数字输入端子状态
- **右侧列（260px）**: 蓝色监控卡片（参数值）+ 模拟信号转换值

### 底部导航栏（80px）
- 5 个导航按钮：主控界面、数据监控、参数设定、分段设定、故障信息

## 组件说明

### param_item（参数行）
```xml
<param_item label="输出能量值" value="60.0" unit="kW"/>
```
- `label`: 参数名称
- `value`: 数值
- `unit`: 单位

### status_btn（状态按钮）
```xml
<status_btn text="联机" bg_color="#COLOR_STATUS_BLUE"/>
```
- `text`: 按钮文字
- `bg_color`: 背景颜色

### monitor_card（监控卡片）
```xml
<monitor_card title="参数号" 
              value="040" 
              unit=""
              color_dark="#COLOR_MONITOR_GREEN_DARK"
              color_light="#COLOR_MONITOR_GREEN_LIGHT"/>
```
- `title`: 标题
- `value`: 显示数值
- `unit`: 单位
- `color_dark`: 深色背景
- `color_light`: 浅色背景

### nav_tab（导航按钮）
```xml
<nav_tab text="主控界面" bg_color="#COLOR_NAV_GRAY"/>
```
- `text`: 导航文字
- `bg_color`: 背景颜色

## 自定义修改建议

### 调整颜色
在 `globals.xml` 中修改颜色常量：
```xml
<const name="COLOR_STATUS_BLUE" type="color" value="0x0099CC"/>
```

### 调整字体
如需使用自定义字体：
1. 将字体文件放入 `fonts/` 目录
2. 在 `globals.xml` 中定义字体
3. 在样式中引用

### 添加数据绑定
如需动态更新数据：
1. 在 `globals.xml` 中添加 Subject：
   ```xml
   <subject name="output_power" type="string" initial="60.0"/>
   ```
2. 在组件中绑定：
   ```xml
   <param_item label="输出能量值" value="@output_power" unit="kW"/>
   ```

## 下一步扩展

- [ ] 添加其他屏幕（数据监控、参数设定等）
- [ ] 实现底部导航的屏幕切换逻辑
- [ ] 添加数据绑定实现实时更新
- [ ] 添加事件处理（按钮点击回调）
- [ ] 优化字体和图标资源

## 技术支持

- LVGL Pro 官方文档: https://docs.lvgl.io/master/details/xml/
- LVGL Pro Editor 下载: https://pro.lvgl.io
- LVGL 论坛: https://forum.lvgl.io

---

**创建日期**: 2026-02-24  
**LVGL 版本**: 9.4.0
