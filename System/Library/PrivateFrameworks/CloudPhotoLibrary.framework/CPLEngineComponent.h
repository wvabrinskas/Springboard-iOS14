/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CPLEngineComponent <NSObject>
@optional
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1;

@required
-(void)openWithCompletionHandler:(/*^block*/id)arg1;
-(id)componentName;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;

@end
