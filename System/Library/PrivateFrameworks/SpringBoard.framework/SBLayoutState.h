/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSSet, NSString;

@interface SBLayoutState : NSObject <BSDescriptionProviding> {

	long long _interfaceOrientation;
	long long _elementInterfaceOrientation;
	NSSet* _elements;

}

@property (nonatomic,readonly) NSSet * elements;                                   //@synthesize elements=_elements - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) long long elementInterfaceOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_defaultInterfaceOrientation;
-(id)succinctDescription;
-(id)init;
-(id)appLayout;
-(id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3 ;
-(NSSet *)elements;
-(unsigned long long)hash;
-(BOOL)layoutContainsRole:(long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)interfaceOrientation;
-(id)elementWithIdentifier:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)elementWithRole:(long long)arg1 ;
-(long long)elementInterfaceOrientation;
-(id)displayItemFromLayoutElement:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 withRole:(long long)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)floatingAppLayout;
@end
