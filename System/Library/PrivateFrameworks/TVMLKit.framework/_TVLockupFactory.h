/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVMLKit/TVMLKit-Structs.h>
@interface _TVLockupFactory : NSObject
+(TVCellMetrics)cellMetricsForCollectionElement:(id)arg1 ;
+(void)updateViewLayoutForCell:(id)arg1 forSize:(CGSize)arg2 ;
+(void)_configureCell:(id)arg1 layout:(id)arg2 element:(id)arg3 ;
+(void)_configureStackingPoster:(id)arg1 layout:(id)arg2 element:(id)arg3 forMetrics:(BOOL)arg4 ;
+(id)_configurationIdentifierForElement:(id)arg1 ;
+(UIEdgeInsets)_customCellPaddingForCellMetrics:(TVCellMetrics)arg1 withCollectionCellMetrics:(TVCellMetrics)arg2 contentAlignment:(long long)arg3 ;
-(id)init;
-(void)_registerLockup;
@end

