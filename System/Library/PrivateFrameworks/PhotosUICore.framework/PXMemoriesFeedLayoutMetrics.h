/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@class PXMemoriesSpec;

@interface PXMemoriesFeedLayoutMetrics : PXLayoutMetrics {

	PXMemoriesSpec* _spec;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) PXMemoriesSpec * spec;                   //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(PXMemoriesSpec *)spec;
-(void)setSpec:(PXMemoriesSpec *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
