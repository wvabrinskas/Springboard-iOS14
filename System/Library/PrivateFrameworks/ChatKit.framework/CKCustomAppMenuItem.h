/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKAppMenuItem.h>

@class NSString;

@interface CKCustomAppMenuItem : NSObject <CKAppMenuItem> {

	NSString* ___ck_displayName;
	id ___ck_identifier;

}

@property (nonatomic,readonly) id __ck_identifier;                       //@synthesize __ck_identifier=___ck_identifier - In the implementation block
@property (nonatomic,readonly) NSString * __ck_displayName;              //@synthesize __ck_displayName=___ck_displayName - In the implementation block
-(NSString *)__ck_displayName;
-(id)__ck_imageForTraitCollection:(id)arg1 ;
-(id)__ck_identifier;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 ;
@end

