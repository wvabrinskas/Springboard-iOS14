/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVTAvatarListItem;
@class AVTUIEnvironment, AVTAvatarRecordDataSource, NSArray;

@interface AVTAvatarPickerDataSource : NSObject {

	BOOL _allowAddItem;
	AVTUIEnvironment* _environment;
	AVTAvatarRecordDataSource* _recordDataSource;
	NSArray* _items;
	id<AVTAvatarListItem> _addItem;

}

@property (nonatomic,retain) NSArray * items;                                             //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL allowAddItem;                                           //@synthesize allowAddItem=_allowAddItem - In the implementation block
@property (nonatomic,retain) id<AVTAvatarListItem> addItem;                               //@synthesize addItem=_addItem - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                            //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarStore> store; 
@property (nonatomic,readonly) AVTAvatarRecordDataSource * recordDataSource;              //@synthesize recordDataSource=_recordDataSource - In the implementation block
-(id<AVTAvatarListItem>)addItem;
-(id)itemAtIndex:(long long)arg1 ;
-(long long)numberOfItems;
-(void)setItems:(NSArray *)arg1 ;
-(BOOL)canCreateMemoji;
-(AVTAvatarRecordDataSource *)recordDataSource;
-(AVTUIEnvironment *)environment;
-(void)setAddItem:(id<AVTAvatarListItem>)arg1 ;
-(id)initWithRecordDataSource:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3 ;
-(void)reloadModel;
-(BOOL)isItemAtIndexAddItem:(long long)arg1 ;
-(long long)indexOfAddItem;
-(void)setAllowAddItem:(BOOL)arg1 ;
-(id<AVTAvatarStore>)store;
-(NSArray *)items;
-(BOOL)allowAddItem;
@end

