//
//  VEExcelTableView.h
//  venus
//
//  Created by deyi on 2016/12/19.
//  Copyright © 2016年 deyi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Masonry/Masonry.h>
#import <JKCategories/JKCategories.h>

@protocol VEExcelTableViewDelegate <NSObject>
@required
- (NSInteger)excelViewWithColumn;
- (NSInteger)excelViewWithRow;
- (NSString *)textWithRow:(NSInteger)row column:(NSInteger)column;
@optional
@end

@protocol VEExcelTableViewDataSource <NSObject>

@required

- (UIColor *)contentBackgrountColorWithRow:(NSInteger)row column:(NSInteger)column;
- (UIColor *)textColorWithRow:(NSInteger)row column:(NSInteger)column;

@optional

- (CGFloat)heightForRowAtRow:(NSInteger)row;

@end

@interface VEGridHeaderView : UIView

@property (nonatomic, strong) NSMutableArray<UILabel *> *labels;

- (instancetype)initWithFrame:(CGRect)frame withColumn:(NSInteger)column;


@end

@interface VEExcelCell : UITableViewCell

@property (nonatomic, strong) NSMutableArray<UILabel *> *labels;


- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier count:(NSInteger)count;

@end

@interface VEExcelTableView : UIScrollView

@property (nonatomic, weak) id<VEExcelTableViewDataSource> dataSource;
@property (nonatomic, weak) id<VEExcelTableViewDelegate> vedelegate;
//@property(nonatomic, assign) BOOL isDragging;

- (instancetype)initWithFrame:(CGRect)frame withColumn:(NSInteger)column;

@end

