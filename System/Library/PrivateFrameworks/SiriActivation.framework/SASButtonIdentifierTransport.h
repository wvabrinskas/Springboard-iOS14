/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SASButtonIdentifierTransport : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(BOOL)_identifierMatchesSiriButtonIdentifier:(long long)arg1 ;
-(id)initWithSiriButtonIdentifier:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)siriButtonIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
