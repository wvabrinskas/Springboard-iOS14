/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSURL, SKUIReviewMetadata, NSNumber, NSString;

@interface SUScriptReview : SUScriptObject {

	NSURL* _infoURL;
	SKUIReviewMetadata* _review;

}

@property (readonly) NSNumber * adamID; 
@property (retain) NSString * body; 
@property (readonly) id hasSavedDraft; 
@property (retain) NSString * infoURL; 
@property (retain) NSString * itemType; 
@property (retain) NSString * nickname; 
@property (retain) id nicknameIsConfirmed; 
@property (retain) NSNumber * rating; 
@property (retain) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSNumber *)adamID;
-(void)setBody:(NSString *)arg1 ;
-(id)init;
-(NSString *)body;
-(NSString *)itemType;
-(NSString *)title;
-(NSString *)infoURL;
-(NSString *)nickname;
-(void)setTitle:(NSString *)arg1 ;
-(void)setRating:(NSNumber *)arg1 ;
-(id)_className;
-(id)attributeKeys;
-(void)setNickname:(NSString *)arg1 ;
-(void)setItemType:(NSString *)arg1 ;
-(NSNumber *)rating;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)copyReview;
-(id)initWithReview:(id)arg1 ;
-(id)removeDraft;
-(id)restoreFromDraft;
-(id)saveAsDraft;
-(id)hasSavedDraft;
-(id)nicknameIsConfirmed;
-(void)setInfoURL:(NSString *)arg1 ;
-(void)setNicknameIsConfirmed:(id)arg1 ;
@end

