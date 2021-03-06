/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSDictionary;

@interface AVTColorDescription : NSObject {

	NSMutableDictionary* _colors;
	NSMutableDictionary* _variationMin;
	NSMutableDictionary* _variationMax;
	NSDictionary* _color;

}

@property (readonly) NSDictionary * color;                      //@synthesize color=_color - In the implementation block
@property (readonly) NSDictionary * variationsMin; 
@property (readonly) NSDictionary * variationsMax; 
-(id)colors;
-(id)initWithDescription:(id)arg1 ;
-(NSDictionary *)color;
-(NSDictionary *)variationsMin;
-(NSDictionary *)variationsMax;
@end

