/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPiCloudFamilyInvitationMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _title;
	NSString* _subtitle;
	NSString* _action;
	NSString* _kind;
	_BlastDoorLPImage* _image;
	_BlastDoorLPImage* _icon;

}

@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * kind;                          //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * image;              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * icon;               //@synthesize icon=_icon - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(unsigned long long)hash;
-(_BlastDoorLPImage *)icon;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIcon:(_BlastDoorLPImage *)arg1 ;
-(void)setImage:(_BlastDoorLPImage *)arg1 ;
-(_BlastDoorLPImage *)image;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)action;
@end
