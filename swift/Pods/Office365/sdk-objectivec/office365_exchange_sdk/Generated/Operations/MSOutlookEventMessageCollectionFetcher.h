/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSOutlookEventMessageFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookModels.h"

/**
* The header for type MSOutlookEventMessageCollectionFetcher.
*/

@protocol MSOutlookEventMessageCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSOutlookEventMessage> *eventMessages, MSODataException *exception))callback;

- (id<MSOutlookEventMessageCollectionFetcher>)select:(NSString *)params;
- (id<MSOutlookEventMessageCollectionFetcher>)filter:(NSString *)params;
- (id<MSOutlookEventMessageCollectionFetcher>)top:(int)value;
- (id<MSOutlookEventMessageCollectionFetcher>)skip:(int)value;
- (id<MSOutlookEventMessageCollectionFetcher>)expand:(NSString *)value;
- (id<MSOutlookEventMessageCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSOutlookEventMessageCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookEventMessageCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSOutlookEventMessageFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addEventMessage:(MSOutlookEventMessage *)entity callback:(void (^)(MSOutlookEventMessage *eventMessage, MSODataException *e))callback;

@end

@interface MSOutlookEventMessageCollectionFetcher : MSODataCollectionFetcher<MSOutlookEventMessageCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end