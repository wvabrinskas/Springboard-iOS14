/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXMemoriesBlacklistAccessoryViewSpec : NSObject {

	unsigned long long _type;
	CGRect _contentViewFrame;
	CGRect _accessoryViewFrame;

}

@property (assign,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGRect contentViewFrame;                //@synthesize contentViewFrame=_contentViewFrame - In the implementation block
@property (nonatomic,readonly) CGRect accessoryViewFrame;              //@synthesize accessoryViewFrame=_accessoryViewFrame - In the implementation block
+(id)specWithFrame:(CGRect)arg1 ;
-(CGRect)accessoryViewFrame;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithContentViewFrame:(CGRect)arg1 ;
-(CGRect)contentViewFrame;
@end

