/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DocumentManager/DOCFrecencyBasedEvent.h>

@class NSString, FPItem, NSNumber;

@interface DOCHotFolderEvent : DOCFrecencyBasedEvent {

	NSString* _appBundleIdentifier;
	FPItem* _folderItem;
	unsigned long long _type;
	NSNumber* _rowId;

}

@property (nonatomic,retain) NSNumber * rowId;                          //@synthesize rowId=_rowId - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) FPItem * folderItem;                         //@synthesize folderItem=_folderItem - In the implementation block
@property (assign,nonatomic) unsigned long long type;                   //@synthesize type=_type - In the implementation block
-(NSNumber *)rowId;
-(void)setType:(unsigned long long)arg1 ;
-(void)setRowId:(NSNumber *)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)type;
-(NSString *)appBundleIdentifier;
-(FPItem *)folderItem;
-(void)setFolderItem:(FPItem *)arg1 ;
-(id)initWithRowId:(id)arg1 appBundleIdentifier:(id)arg2 folderItem:(id)arg3 type:(unsigned long long)arg4 lastUsedDate:(id)arg5 frecency:(double)arg6 ;
-(id)initWithAppBundleIdentifier:(id)arg1 folderItem:(id)arg2 type:(unsigned long long)arg3 lastUsedDate:(id)arg4 frecency:(double)arg5 ;
@end

