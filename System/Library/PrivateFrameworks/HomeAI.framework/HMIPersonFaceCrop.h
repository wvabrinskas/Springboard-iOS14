/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIFaceCrop.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HMIPersonFaceCrop : HMIFaceCrop <NSCopying, NSSecureCoding> {

	NSUUID* _personUUID;

}

@property (copy,readonly) NSUUID * personUUID;              //@synthesize personUUID=_personUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)attributeDescriptions;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)personUUID;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(CGRect)arg4 personUUID:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

