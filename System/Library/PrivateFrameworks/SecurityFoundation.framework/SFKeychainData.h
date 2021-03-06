/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, SFKeychainDataAttributes;

@interface SFKeychainData : NSObject <NSCopying, NSSecureCoding> {

	id _keychainDataInternal;

}

@property (readonly) NSData * data; 
@property (nonatomic,retain) SFKeychainDataAttributes * attributes; 
+(BOOL)supportsSecureCoding;
-(void)setAttributes:(SFKeychainDataAttributes *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SFKeychainDataAttributes *)attributes;
@end

