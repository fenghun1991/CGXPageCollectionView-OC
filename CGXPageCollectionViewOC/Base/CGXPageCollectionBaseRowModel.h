//
//  CGXPageCollectionBaseRowModel.h
//  CGXPageCollectionView-OC
//
//  Created by CGX on 2020/6/06.
//  Copyright © 2020 CGX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CGXPageCollectionBaseRowModel : NSObject
/*
 初始化方法
 */
- (instancetype)initWithCelllass:(Class)cellClass IsXib:(BOOL)isXib;
//默认不适用xib
@property (nonatomic , assign,readonly) BOOL isXib;

@property(nonatomic, strong,readonly) Class cellClass;
//cell的标识符
@property (nonatomic , strong,readonly) NSString *cellIdentifier;

// cell的颜色 默认白色
@property (nonatomic , strong) UIColor *cellColor;
// cell的高 默认100
@property (nonatomic , assign) CGFloat cellHeight;
//cell的原始数据
@property (nonatomic , strong) id dataModel;

@property (nonatomic , assign) BOOL isSelectCell;
// 是否有下划线
@property (nonatomic , assign) BOOL isLine;
@end

NS_ASSUME_NONNULL_END
