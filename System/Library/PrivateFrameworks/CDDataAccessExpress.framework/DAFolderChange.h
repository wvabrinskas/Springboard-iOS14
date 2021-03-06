/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol DAFolderChangeConsumer;
@class NSString;

@interface DAFolderChange : NSObject <NSSecureCoding> {

	BOOL _renameOnCollision;
	unsigned _taskId;
	unsigned long long _changeType;
	NSString* _folderId;
	NSString* _parentFolderId;
	NSString* _displayName;
	long long _dataclass;
	id<DAFolderChangeConsumer> _consumer;

}

@property (assign,nonatomic) unsigned long long changeType;                           //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * folderId;                                     //@synthesize folderId=_folderId - In the implementation block
@property (nonatomic,retain) NSString * parentFolderId;                               //@synthesize parentFolderId=_parentFolderId - In the implementation block
@property (nonatomic,retain) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) long long dataclass;                                     //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic) unsigned taskId;                                         //@synthesize taskId=_taskId - In the implementation block
@property (assign,nonatomic) BOOL renameOnCollision;                                  //@synthesize renameOnCollision=_renameOnCollision - In the implementation block
@property (assign,nonatomic,__weak) id<DAFolderChangeConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setChangeType:(unsigned long long)arg1 ;
-(unsigned long long)changeType;
-(unsigned)taskId;
-(void)setParentFolderId:(NSString *)arg1 ;
-(NSString *)parentFolderId;
-(void)setRenameOnCollision:(BOOL)arg1 ;
-(BOOL)renameOnCollision;
-(void)setConsumer:(id<DAFolderChangeConsumer>)arg1 ;
-(long long)dataclass;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(id)description;
-(id)initFolderChangeWithChangeType:(unsigned long long)arg1 folderId:(id)arg2 parentFolderId:(id)arg3 displayName:(id)arg4 dataclass:(long long)arg5 consumer:(id)arg6 ;
-(void)setFolderId:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)folderId;
-(void)setTaskId:(unsigned)arg1 ;
-(void)setDataclass:(long long)arg1 ;
-(id<DAFolderChangeConsumer>)consumer;
@end

