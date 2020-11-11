/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CALayer, NSSet;

@interface HUCAPackageLayer : NSObject {

	NSString* _name;
	CALayer* _layer;
	NSSet* _tags;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) NSSet * tags;                 //@synthesize tags=_tags - In the implementation block
+(id)_allTags;
+(id)_tagsForName:(id)arg1 ;
-(CALayer *)layer;
-(NSSet *)tags;
-(NSString *)name;
-(void)_applyPrimaryColorWithModifiers:(id)arg1 ;
-(id)initWithName:(id)arg1 layer:(id)arg2 ;
-(void)applyModifiers:(id)arg1 ;
@end
