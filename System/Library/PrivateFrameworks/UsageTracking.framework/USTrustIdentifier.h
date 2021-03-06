/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UsageTracking/UsageTracking-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface USTrustIdentifier : NSObject <NSCopying, NSSecureCoding> {

	BOOL _trusted;
	NSString* _identifier;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) BOOL trusted;                            //@synthesize trusted=_trusted - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identifierWithIdentifier:(id)arg1 trusted:(BOOL)arg2 ;
-(unsigned long long)hash;
-(BOOL)trusted;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 trusted:(BOOL)arg2 ;
-(void)_USTrustIdentifierCommonInitWithIdentifier:(id)arg1 trusted:(BOOL)arg2 ;
@end

