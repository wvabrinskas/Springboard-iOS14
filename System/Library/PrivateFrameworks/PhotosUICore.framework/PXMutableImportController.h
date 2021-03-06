/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXMutableImportController <NSObject>
@property (assign,getter=isLoadingContent,nonatomic) BOOL loadingContent; 
@property (assign,getter=isImportingAssets,nonatomic) BOOL importingAssets; 
@property (assign,getter=isDeletingAssets,nonatomic) BOOL deletingAssets; 
@property (assign,getter=isUserRequiredToTrustHostOnSourceDevice,nonatomic) BOOL userRequiredToTrustHostOnSourceDevice; 
@property (assign,nonatomic) BOOL hasLoadedInitialBatchOfAssets; 
@property (assign,getter=isLoadingInitialBatchOfAssets,nonatomic) BOOL loadingInitialBatchOfAssets; 
@required
-(BOOL)isDeletingAssets;
-(BOOL)isImportingAssets;
-(BOOL)isLoadingInitialBatchOfAssets;
-(BOOL)hasLoadedInitialBatchOfAssets;
-(BOOL)isLoadingContent;
-(BOOL)isUserRequiredToTrustHostOnSourceDevice;
-(void)setLoadingContent:(BOOL)arg1;
-(void)setImportingAssets:(BOOL)arg1;
-(void)setDeletingAssets:(BOOL)arg1;
-(void)setUserRequiredToTrustHostOnSourceDevice:(BOOL)arg1;
-(void)setHasLoadedInitialBatchOfAssets:(BOOL)arg1;
-(void)setLoadingInitialBatchOfAssets:(BOOL)arg1;

@end

