/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNUIPRLikenessResolver, CNUILikenessRendering, CNSchedulerProvider;
@class CNContactStore, PRPersonaStore;

@interface CNAvatarViewControllerSettings : NSObject {

	BOOL _threeDTouchEnabled;
	CNContactStore* _contactStore;
	unsigned long long _style;
	id<CNUIPRLikenessResolver> _likenessResolver;
	id<CNUILikenessRendering> _likenessRenderer;
	id<CNSchedulerProvider> _schedulerProvider;
	PRPersonaStore* _personaStore;

}

@property (nonatomic,retain) id<CNUIPRLikenessResolver> likenessResolver;              //@synthesize likenessResolver=_likenessResolver - In the implementation block
@property (nonatomic,retain) id<CNUILikenessRendering> likenessRenderer;               //@synthesize likenessRenderer=_likenessRenderer - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> schedulerProvider;                //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,retain) PRPersonaStore * personaStore;                            //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                            //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled;                                  //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                 //@synthesize style=_style - In the implementation block
+(id)settingsWithContactStore:(id)arg1 threeDTouchEnabled:(BOOL)arg2 ;
+(id)settingsWithContactStore:(id)arg1 ;
+(BOOL)threeDTouchEnabledDefaultValue;
+(id)defaultSettings;
+(id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 threeDTouchEnabled:(BOOL)arg3 ;
+(id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 ;
+(id)settingsWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 contactStore:(id)arg3 threeDTouchEnabled:(BOOL)arg4 schedulerProvider:(id)arg5 ;
+(id)defaultSettingsWithCacheSize:(unsigned long long)arg1 threeDTouchEnabled:(BOOL)arg2 ;
-(void)setSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id<CNUIPRLikenessResolver>)likenessResolver;
-(id<CNSchedulerProvider>)schedulerProvider;
-(PRPersonaStore *)personaStore;
-(id)initWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 contactStore:(id)arg3 threeDTouchEnabled:(BOOL)arg4 schedulerProvider:(id)arg5 ;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(BOOL)threeDTouchEnabled;
-(void)setPersonaStore:(PRPersonaStore *)arg1 ;
-(CNContactStore *)contactStore;
-(unsigned long long)style;
-(void)setLikenessResolver:(id<CNUIPRLikenessResolver>)arg1 ;
-(id<CNUILikenessRendering>)likenessRenderer;
-(void)setLikenessRenderer:(id<CNUILikenessRendering>)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
@end

