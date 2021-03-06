/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKImage;

@interface PKShareablePassMetadata : NSObject <NSSecureCoding, NSCopying> {

	NSString* _credentialIdentifier;
	NSString* _cardConfigurationIdentifier;
	NSString* _sharingInstanceIdentifier;
	NSString* _localizedDescription;
	NSString* _ownerDisplayName;
	PKImage* _pkPassThumbnailImage;
	NSString* _nonce;

}

@property (nonatomic,retain) NSString * credentialIdentifier;                     //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
@property (nonatomic,retain) NSString * cardConfigurationIdentifier;              //@synthesize cardConfigurationIdentifier=_cardConfigurationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sharingInstanceIdentifier;                //@synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier - In the implementation block
@property (assign,nonatomic) CGImageRef passThumbnailImage; 
@property (nonatomic,retain) NSString * localizedDescription;                     //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) NSString * ownerDisplayName;                         //@synthesize ownerDisplayName=_ownerDisplayName - In the implementation block
@property (nonatomic,retain) PKImage * pkPassThumbnailImage;                      //@synthesize pkPassThumbnailImage=_pkPassThumbnailImage - In the implementation block
@property (nonatomic,retain) NSString * nonce;                                    //@synthesize nonce=_nonce - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)sharingInstanceIdentifier;
-(void)setSharingInstanceIdentifier:(NSString *)arg1 ;
-(id)initWithProvisioningCredentialIdentifier:(id)arg1 cardConfigurationIdentifier:(id)arg2 sharingInstanceIdentifier:(id)arg3 passThumbnailImage:(CGImageRef)arg4 ownerDisplayName:(id)arg5 localizedDescription:(id)arg6 ;
-(void)setPkPassThumbnailImage:(PKImage *)arg1 ;
-(NSString *)localizedDescription;
-(void)setCardConfigurationIdentifier:(NSString *)arg1 ;
-(void)setOwnerDisplayName:(NSString *)arg1 ;
-(CGImageRef)passThumbnailImage;
-(NSString *)cardConfigurationIdentifier;
-(NSString *)ownerDisplayName;
-(PKImage *)pkPassThumbnailImage;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setNonce:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)nonce;
-(NSString *)credentialIdentifier;
-(void)setCredentialIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

