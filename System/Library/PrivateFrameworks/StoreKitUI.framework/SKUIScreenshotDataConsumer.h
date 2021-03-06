/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStyledImageDataConsumer.h>

@interface SKUIScreenshotDataConsumer : SKUIStyledImageDataConsumer {

	BOOL _forcesPortrait;

}

@property (assign,nonatomic) BOOL forcesPortrait;              //@synthesize forcesPortrait=_forcesPortrait - In the implementation block
+(id)consumer;
+(id)consumerWithScreenshotSize:(CGSize)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(void)setForcesPortrait:(BOOL)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)forcesPortrait;
@end

