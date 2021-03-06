/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSString, SUScriptAccount;

@interface SUScriptAMSViewController : SUScriptViewController {

	NSString* _DSID;
	NSString* _URL;
	SUScriptAccount* _primaryAccount;

}

@property (nonatomic,retain) SUScriptAccount * primaryAccount;              //@synthesize primaryAccount=_primaryAccount - In the implementation block
@property (nonatomic,copy) NSString * DSID;                                 //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * URL;                                  //@synthesize URL=_URL - In the implementation block
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)DSID;
-(void)setDSID:(NSString *)arg1 ;
-(void)setPrimaryAccount:(SUScriptAccount *)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(SUScriptAccount *)primaryAccount;
-(id)_className;
-(id)attributeKeys;
-(NSString *)URL;
-(id)scriptAttributeKeys;
-(id)newNativeViewController;
-(id)initWithPrimaryAccount:(id)arg1 ;
@end

