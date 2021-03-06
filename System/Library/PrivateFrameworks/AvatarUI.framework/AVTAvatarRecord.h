/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UIActivityItemSource.h>
#import <libobjc.A.dylib/AVTAvatarRecordInternal.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/AVTAvatarRecord.h>
@class NSString;


@protocol AVTAvatarRecord <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@required
-(BOOL)isEditable;
-(NSString *)identifier;

@end


@class NSString, NSData, NSDate;

@interface AVTAvatarRecord : NSObject <UIActivityItemSource, AVTAvatarRecordInternal, NSSecureCoding, NSCopying, AVTAvatarRecord> {

	NSString* _identifier;
	NSData* _avatarData;
	NSDate* _orderDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSData * avatarData;                            //@synthesize avatarData=_avatarData - In the implementation block
@property (nonatomic,readonly) NSDate * orderDate;                           //@synthesize orderDate=_orderDate - In the implementation block
@property (getter=isPuppet,nonatomic,readonly) BOOL puppet; 
@property (nonatomic,copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
+(BOOL)supportsSecureCoding;
+(id)defaultAvatarRecord;
+(BOOL)canLoadAvatarWithData:(id)arg1 ;
+(id)dataForNeutralRecord;
+(id)dataForNewRecord;
+(/*^block*/id)matchingIdentifierTest:(id)arg1 ;
-(BOOL)isEditable;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)init;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(BOOL)isPuppet;
-(unsigned long long)hash;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(NSString *)identifier;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAvatarData:(NSData *)arg1 ;
-(id)initWithAvatarData:(id)arg1 identifier:(id)arg2 orderDate:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)orderDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)avatarData;
-(id)initWithAvatarData:(id)arg1 orderDate:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)initWithAvatarData:(id)arg1 ;
@end

