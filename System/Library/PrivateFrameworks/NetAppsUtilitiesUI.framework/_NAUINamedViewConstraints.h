/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface _NAUINamedViewConstraints : NSObject {

	NSString* _name;
	NSArray* _constraints;
	id _stalenessToken;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * constraints;               //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy,readonly) id stalenessToken;              //@synthesize stalenessToken=_stalenessToken - In the implementation block
-(NSArray *)constraints;
-(NSString *)name;
-(id)initWithName:(id)arg1 constraints:(id)arg2 stalenessToken:(id)arg3 ;
-(id)stalenessToken;
@end
