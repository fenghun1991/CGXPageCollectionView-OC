//
//  CGXPageCollectionIrreguarSectionModel.m
//  CGXPageCollectionView-OC
//
//  Created by CGX on 2020/6/06.
//  Copyright © 2020 CGX. All rights reserved.
//

#import "CGXPageCollectionIrreguarSectionModel.h"

@implementation CGXPageCollectionIrreguarSectionModel
- (void)initializeData
{
    [super initializeData];
    self.bottomRow = 1;
     self.topSection = 1;
     self.topRow = 1;
    self.topHeight = 100;
    self.bottomHeight = 100;
}

- (void)initWithFooterClass:(Class)footerClass IsXib:(BOOL)isXib
{
    [super initWithFooterClass:footerClass IsXib:isXib];
}
- (void)initWithHeaderClass:(Class)headerClass IsXib:(BOOL)isXib
{
    [super initWithHeaderClass:headerClass IsXib:isXib];
}
@end
