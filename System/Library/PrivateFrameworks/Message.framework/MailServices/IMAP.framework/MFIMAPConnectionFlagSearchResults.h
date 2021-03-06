/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface MFIMAPConnectionFlagSearchResults : NSObject {

	NSMutableDictionary* _uidsWithFlagMaskSet;
	NSMutableDictionary* _uidsWithoutFlagMaskSet;

}
-(id)init;
-(id)description;
-(void)cacheStateForUIDs:(id)arg1 mask:(unsigned long long)arg2 existenceSetsFlag:(BOOL)arg3 ;
-(id)copyResponseForUID:(unsigned long long)arg1 ;
-(id)_indexSetFromUIDs:(id)arg1 ;
-(unsigned long long)_flagsForUID:(unsigned long long)arg1 ;
@end

