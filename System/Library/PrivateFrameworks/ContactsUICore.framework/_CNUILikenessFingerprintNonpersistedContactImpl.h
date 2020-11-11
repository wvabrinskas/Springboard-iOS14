/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/_CNUILikenessFingerprintImpl.h>

@class NSString, NSArray, NSValue;

@interface _CNUILikenessFingerprintNonpersistedContactImpl : NSObject <_CNUILikenessFingerprintImpl> {

	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSArray* _emailAddresses;
	NSArray* _phoneNumbers;
	NSValue* _imageDataPointer;
	NSValue* _thumbnailImageDataPointer;

}

@property (copy,readonly) NSString * givenName;                             //@synthesize givenName=_givenName - In the implementation block
@property (copy,readonly) NSString * middleName;                            //@synthesize middleName=_middleName - In the implementation block
@property (copy,readonly) NSString * familyName;                            //@synthesize familyName=_familyName - In the implementation block
@property (copy,readonly) NSArray * emailAddresses;                         //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (copy,readonly) NSArray * phoneNumbers;                           //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (copy,readonly) NSValue * imageDataPointer;                       //@synthesize imageDataPointer=_imageDataPointer - In the implementation block
@property (copy,readonly) NSValue * thumbnailImageDataPointer;              //@synthesize thumbnailImageDataPointer=_thumbnailImageDataPointer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContact:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(NSString *)familyName;
-(NSArray *)emailAddresses;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)givenName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)middleName;
-(NSArray *)phoneNumbers;
-(BOOL)hasContactIdentifier:(id)arg1 ;
-(id)initWithGivenName:(id)arg1 middleName:(id)arg2 familyName:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5 imageData:(id)arg6 thumbnailImageData:(id)arg7 ;
-(NSValue *)imageDataPointer;
-(NSValue *)thumbnailImageDataPointer;
@end
