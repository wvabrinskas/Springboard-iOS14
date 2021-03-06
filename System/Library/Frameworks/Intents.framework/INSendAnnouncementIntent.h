/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSendAnnouncementIntentExport.h>

@class INAnnouncement, NSArray, NSNumber, NSString;

@interface INSendAnnouncementIntent : INIntent <INSendAnnouncementIntentExport>

@property (nonatomic,copy,readonly) INAnnouncement * announcement; 
@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,copy,readonly) NSNumber * isReply; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(NSArray *)recipients;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(long long)_preferredInteractionDirection;
-(id)domain;
-(INAnnouncement *)announcement;
-(void)setAnnouncement:(INAnnouncement *)arg1 ;
-(id)initWithAnnouncement:(id)arg1 recipients:(id)arg2 isReply:(id)arg3 ;
-(void)setIsReply:(NSNumber *)arg1 ;
-(NSNumber *)isReply;
@end

