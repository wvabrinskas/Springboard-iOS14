/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _SFDownloadDelegate <NSObject>
@optional
-(void)downloadDidResume:(id)arg1;
-(void)downloadContentsDidChange:(id)arg1;
-(void)downloadDidReceiveResponse:(id)arg1;
-(BOOL)downloadShouldImportPlaceholderToDownloadsFolder:(id)arg1;
-(void)downloadWillBeDeleted:(id)arg1;
-(void)createDirectoryForDownload:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)downloadDidImportFileToDownloadsFolder:(id)arg1;
-(void)downloadShouldContinueAfterReceivingResponse:(id)arg1 decisionHandler:(/*^block*/id)arg2;

@required
-(void)downloadDidFail:(id)arg1;
-(void)downloadDidStart:(id)arg1;
-(void)downloadDidFinish:(id)arg1;

@end

