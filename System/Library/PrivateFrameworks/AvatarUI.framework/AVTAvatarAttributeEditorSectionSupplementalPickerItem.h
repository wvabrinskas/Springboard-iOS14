/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionSupplementalPickerItemInternal.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionSupplementalPickerItem.h>
@class NSString;


@protocol AVTAvatarAttributeEditorSectionSupplementalPickerItem <NSObject>
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (nonatomic,copy,readonly) id editorUpdater; 
@required
-(void)setSelected:(BOOL)arg1;
-(BOOL)isSelected;
-(id)editorUpdater;
-(NSString *)localizedDescription;
-(NSString *)localizedName;

@end


@class NSString;

@interface AVTAvatarAttributeEditorSectionSupplementalPickerItem : NSObject <AVTAvatarAttributeEditorSectionSupplementalPickerItemInternal, AVTAvatarAttributeEditorSectionSupplementalPickerItem> {

	BOOL _selected;
	NSString* _localizedName;
	/*^block*/id _avatarUpdater;
	/*^block*/id _editorUpdater;
	NSString* _localizedDescription;

}

@property (nonatomic,copy,readonly) id avatarUpdater;                             //@synthesize avatarUpdater=_avatarUpdater - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                     //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy,readonly) id editorUpdater;                             //@synthesize editorUpdater=_editorUpdater - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(id)editorUpdater;
-(NSString *)localizedDescription;
-(id)initWithLocalizedName:(id)arg1 localizedDescription:(id)arg2 avatarUpdater:(/*^block*/id)arg3 editorUpdater:(/*^block*/id)arg4 selected:(BOOL)arg5 ;
-(NSString *)localizedName;
-(id)avatarUpdater;
@end

