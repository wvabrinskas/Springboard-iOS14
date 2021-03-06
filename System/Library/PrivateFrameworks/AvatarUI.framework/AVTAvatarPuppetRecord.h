/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVTAvatarRecordInternal.h>

@class NSString;

@interface AVTAvatarPuppetRecord : NSObject <AVTAvatarRecordInternal> {

	NSString* _puppetName;

}

@property (nonatomic,copy,readonly) NSString * puppetName;                   //@synthesize puppetName=_puppetName - In the implementation block
@property (getter=isPuppet,nonatomic,readonly) BOOL puppet; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)matchingIdentifierTest:(id)arg1 ;
-(BOOL)isEditable;
-(id)initWithPuppetName:(id)arg1 ;
-(BOOL)isPuppet;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)puppetName;
@end

