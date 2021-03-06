/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMNicknameAvatar.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface IMNicknameAvatarImage : IMNicknameAvatar <NSSecureCoding> {

	NSString* _imageName;
	NSString* _imageFilePath;

}

@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,copy) NSString * imageName;                  //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * imageFilePath;              //@synthesize imageFilePath=_imageFilePath - In the implementation block
@property (nonatomic,readonly) BOOL imageExists; 
+(BOOL)supportsSecureCoding;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)hasImage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)imageFilePath;
-(id)initWithImageName:(id)arg1 imageFilePath:(id)arg2 ;
-(id)publicDictionaryRepresentation;
-(BOOL)imageExists;
-(id)description;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)imageData;
-(id)initWithpublicDictionaryMetadataRepresentation:(id)arg1 ;
-(id)publicDictionaryMetadataRepresentation;
-(id)loadAndReturnImageData;
-(void)setImageFilePath:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

