/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CPSSessionObserving <NSObject>
@optional
-(void)didDetermineAvailability:(BOOL)arg1 options:(id)arg2;
-(void)didUpdateMetadata:(id)arg1;
-(void)didFinishLoadingWithError:(id)arg1;
-(void)didUpdateInstallProgress:(id)arg1;
-(void)didInstallApplicationPlaceholder;
-(void)didRetrieveApplicationIcon:(id)arg1;
-(void)didRetrieveHeroImage:(id)arg1;
-(void)didFinishTestingAtTime:(double)arg1;
-(void)didRetrieveBusinessIcon:(id)arg1;

@end

