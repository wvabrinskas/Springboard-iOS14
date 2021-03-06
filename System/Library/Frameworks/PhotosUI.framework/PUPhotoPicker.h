/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSDictionary;


@protocol PUPhotoPicker <NSObject>
@property (nonatomic,readonly) unsigned long long savingOptions; 
@property (nonatomic,readonly) NSArray * mediaTypes; 
@property (nonatomic,readonly) BOOL allowsMultipleSelection; 
@property (nonatomic,readonly) unsigned long long multipleSelectionLimit; 
@property (nonatomic,readonly) BOOL requiresPickingConfirmation; 
@property (nonatomic,readonly) BOOL showsFileSizePicker; 
@property (nonatomic,readonly) BOOL showsPrompt; 
@property (nonatomic,readonly) BOOL convertAutoloopsToGIF; 
@property (nonatomic,readonly) NSDictionary * properties; 
@required
-(void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
-(unsigned long long)multipleSelectionLimit;
-(void)didSelectMediaWithInfoDictionary:(id)arg1 allowedHandler:(/*^block*/id)arg2;
-(NSDictionary *)properties;
-(BOOL)showsFileSizePicker;
-(BOOL)requiresPickingConfirmation;
-(BOOL)allowsMultipleSelection;
-(NSArray *)mediaTypes;
-(void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(/*^block*/id)arg2;
-(unsigned long long)savingOptions;
-(void)presentViewController:(id)arg1;
-(void)performPhotosSelection;
-(BOOL)convertAutoloopsToGIF;
-(BOOL)showsPrompt;
-(void)cancelPhotoPicker;
-(void)didDisplayPhotoPickerSourceType:(long long)arg1;
-(void)didDisplayPhotoPickerPreview;

@end

