/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSArray, NSString, Protocol;

@interface BSObjCProtocol : NSObject <NSCopying, BSDescriptionProviding> {

	NSArray* _inheritedProtocols;
	NSString* _name;
	Protocol* _protocol;
	NSArray* _methods;

}

@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) Protocol * protocol;                     //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,copy,readonly) NSArray * inheritedProtocols; 
@property (nonatomic,copy,readonly) NSArray * methods;                         //@synthesize methods=_methods - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protocolForProtocol:(id)arg1 ;
-(id)succinctDescription;
-(NSArray *)methods;
-(id)init;
-(Protocol *)protocol;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSArray *)inheritedProtocols;
-(NSString *)name;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)methodForSelector:(SEL)arg1 ;
-(id)flattenWithIgnoredInheritedProtocols:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)inheritedProtocolForProtocol:(id)arg1 ;
@end
