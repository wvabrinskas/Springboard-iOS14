/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIMecabraCandidate.h>

@class NSString;

@interface TIMecabraFacemarkCandidate : TIMecabraCandidate {

	NSString* _category;

}

@property (nonatomic,copy) NSString * category;              //@synthesize category=_category - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)type;
+(id)candidateWithCandidate:(id)arg1 category:(id)arg2 input:(id)arg3 mecabraCandidatePointerValue:(id)arg4 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isFacemarkCandidate;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 category:(id)arg2 input:(id)arg3 mecabraCandidatePointerValue:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

