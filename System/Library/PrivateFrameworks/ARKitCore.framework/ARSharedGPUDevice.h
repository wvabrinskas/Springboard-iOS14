/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice;
@interface ARSharedGPUDevice : NSObject {

	id<MTLDevice> _device;

}

@property (nonatomic,retain) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
+(id)sharedInstance;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
@end
