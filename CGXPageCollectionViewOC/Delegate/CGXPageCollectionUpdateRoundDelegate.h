//
//  CGXPageCollectionUpdateRoundDelegate.h
//  CGXPageCollectionView-OC
//
//  Created by CGX on 2020/6/06.
//  Copyright © 2020 CGX. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CGXPageCollectionUpdateRoundDelegate <NSObject,UICollectionViewDelegateFlowLayout>

@required


@optional

/// 设置底色参数
/// @param collectionView collectionView description
/// @param collectionViewLayout collectionViewLayout description
/// @param section section description
- (CGXPageCollectionRoundModel *)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout configModelForSectionAtIndex:(NSInteger)section;

/// 设置底色偏移点量（与collectionview的sectionInset用法相同，但是与sectionInset区分）
/// @param collectionView collectionView description
/// @param collectionViewLayout collectionViewLayout description
/// @param section section description
- (UIEdgeInsets)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout borderEdgeInsertsForSectionAtIndex:(NSInteger)section;

/// 设置是否计算headerview（根据section判断是否单独计算）
/// @param collectionView collectionView description
/// @param collectionViewLayout collectionViewLayout description
/// @param section section description
- (BOOL)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout isCalculateHeaderViewIndex:(NSInteger)section;

/// 设置是否计算footerview（根据section判断是否单独计算）
/// @param collectionView collectionView description
/// @param collectionViewLayout collectionViewLayout description
/// @param section section description
- (BOOL)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout isCalculateFooterViewIndex:(NSInteger)section;

@end

NS_ASSUME_NONNULL_END
