/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SEService/SEService-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface SEEndPointCA : NSObject <NSSecureCoding> {

	NSString* _identifier;
	SecCertificateRef _certificate;
	NSString* _subjectIdentifier;
	NSArray* _certificates;
	NSData* _secureElementAttestation;

}

@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * subjectIdentifier;                   //@synthesize subjectIdentifier=_subjectIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * certificates;                         //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) NSData * secureElementAttestation;              //@synthesize secureElementAttestation=_secureElementAttestation - In the implementation block
@property (nonatomic,readonly) SecCertificateRef certificate;                //@synthesize certificate=_certificate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)decodeWithData:(id)arg1 error:(id*)arg2 ;
+(id)endPointCAWithIdentifier:(id)arg1 subjectIdentifer:(id)arg2 secureElementAttestation:(id)arg3 error:(id*)arg4 ;
-(NSArray *)certificates;
-(id)dumpState;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)subjectIdentifier;
-(id)description;
-(SecCertificateRef)certificate;
-(void)setCertificates:(NSArray *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)encodeWithError:(id*)arg1 ;
-(void)setSubjectIdentifier:(NSString *)arg1 ;
-(void)setSecureElementAttestation:(NSData *)arg1 ;
-(NSData *)secureElementAttestation;
@end
