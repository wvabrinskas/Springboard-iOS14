/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MultitouchSupport.framework/MultitouchSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSBundle;

@interface MTAHTSupport : NSObject {

	NSBundle* _bundle;
	Class _AHTDevice;

}

@property (retain) NSBundle * bundle;                      //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) Class AHTDevice;              //@synthesize AHTDevice=_AHTDevice - In the implementation block
+(id)allDevices;
+(id)sharedInstance;
-(void)setBundle:(NSBundle *)arg1 ;
-(id)init;
-(NSBundle *)bundle;
-(Class)AHTDevice;
-(void)setAHTDevice:(Class)arg1 ;
@end
