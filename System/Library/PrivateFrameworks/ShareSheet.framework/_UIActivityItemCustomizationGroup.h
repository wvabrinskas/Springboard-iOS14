/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface _UIActivityItemCustomizationGroup : NSObject {

	NSString* _name;
	NSString* _identifier;
	NSArray* _customizations;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customizations;              //@synthesize customizations=_customizations - In the implementation block
-(NSArray *)customizations;
-(NSString *)identifier;
-(NSString *)name;
-(id)_initGroupWithName:(id)arg1 identifier:(id)arg2 customizations:(id)arg3 ;
@end

