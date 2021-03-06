/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface CPLForceSyncTask : NSObject {

	BOOL _cancelled;
	NSArray* _scopeIdentifiers;
	NSString* _taskIdentifier;

}

@property (nonatomic,copy) NSString * taskIdentifier;                          //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scopeIdentifiers;                //@synthesize scopeIdentifiers=_scopeIdentifiers - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(NSString *)taskIdentifier;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(BOOL)isCancelled;
-(id)description;
-(void)cancelTask;
-(NSArray *)scopeIdentifiers;
-(id)initWithScopeIdentifiers:(id)arg1 ;
-(void)launchTask;
@end

