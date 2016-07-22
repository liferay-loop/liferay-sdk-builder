/**
 * Copyright (c) 2000-present Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */

#import "LRBaseService.h"

/**
 * @author Bruno Farache
 */
@interface LRMBMessageService_v7 : LRBaseService

- (NSDictionary *)getMessageWithMessageId:(long long)messageId error:(NSError **)error;
- (NSArray *)getThreadMessagesWithGroupId:(long long)groupId categoryId:(long long)categoryId threadId:(long long)threadId status:(int)status start:(int)start end:(int)end error:(NSError **)error;
- (NSNumber *)getCategoryMessagesCountWithGroupId:(long long)groupId categoryId:(long long)categoryId status:(int)status error:(NSError **)error;
- (NSDictionary *)addMessageWithGroupId:(long long)groupId categoryId:(long long)categoryId subject:(NSString *)subject body:(NSString *)body format:(NSString *)format inputStreamOVPs:(NSArray *)inputStreamOVPs anonymous:(BOOL)anonymous priority:(double)priority allowPingbacks:(BOOL)allowPingbacks serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;
- (NSDictionary *)addMessageWithGroupId:(long long)groupId categoryId:(long long)categoryId subject:(NSString *)subject body:(NSString *)body format:(NSString *)format fileName:(NSString *)fileName file:(NSDictionary *)file anonymous:(BOOL)anonymous priority:(double)priority allowPingbacks:(BOOL)allowPingbacks serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;
- (NSDictionary *)addMessageWithCategoryId:(long long)categoryId subject:(NSString *)subject body:(NSString *)body serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;
- (NSDictionary *)addMessageWithParentMessageId:(long long)parentMessageId subject:(NSString *)subject body:(NSString *)body format:(NSString *)format inputStreamOVPs:(NSArray *)inputStreamOVPs anonymous:(BOOL)anonymous priority:(double)priority allowPingbacks:(BOOL)allowPingbacks serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;
- (NSDictionary *)addDiscussionMessageWithGroupId:(long long)groupId className:(NSString *)className classPK:(long long)classPK threadId:(long long)threadId parentMessageId:(long long)parentMessageId subject:(NSString *)subject body:(NSString *)body serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;
- (void)addMessageAttachmentWithMessageId:(long long)messageId fileName:(NSString *)fileName file:(NSDictionary *)file mimeType:(NSString *)mimeType error:(NSError **)error;
- (void)deleteDiscussionMessageWithMessageId:(long long)messageId error:(NSError **)error;
- (void)deleteDiscussionMessageWithGroupId:(long long)groupId className:(NSString *)className classPK:(long long)classPK permissionClassName:(NSString *)permissionClassName permissionClassPK:(long long)permissionClassPK permissionOwnerId:(long long)permissionOwnerId messageId:(long long)messageId error:(NSError **)error;
- (void)deleteMessageWithMessageId:(long long)messageId error:(NSError **)error;
- (void)deleteMessageAttachmentWithMessageId:(long long)messageId fileName:(NSString *)fileName error:(NSError **)error;
- (void)deleteMessageAttachmentsWithMessageId:(long long)messageId error:(NSError **)error;
- (void)emptyMessageAttachmentsWithMessageId:(long long)messageId error:(NSError **)error;
- (NSArray *)getCategoryMessagesWithGroupId:(long long)groupId categoryId:(long long)categoryId status:(int)status start:(int)start end:(int)end error:(NSError **)error;
- (NSNumber *)getGroupMessagesCountWithGroupId:(long long)groupId status:(int)status error:(NSError **)error;
- (NSDictionary *)getMessageDisplayWithMessageId:(long long)messageId status:(int)status threadView:(NSString *)threadView includePrevAndNext:(BOOL)includePrevAndNext error:(NSError **)error;
- (NSDictionary *)getMessageDisplayWithMessageId:(long long)messageId status:(int)status error:(NSError **)error;
- (NSNumber *)getThreadMessagesCountWithGroupId:(long long)groupId categoryId:(long long)categoryId threadId:(long long)threadId status:(int)status error:(NSError **)error;
- (void)restoreMessageAttachmentFromTrashWithMessageId:(long long)messageId fileName:(NSString *)fileName error:(NSError **)error;
- (void)subscribeMessageWithMessageId:(long long)messageId error:(NSError **)error;
- (void)unsubscribeMessageWithMessageId:(long long)messageId error:(NSError **)error;
- (void)updateAnswerWithMessageId:(long long)messageId answer:(BOOL)answer cascade:(BOOL)cascade error:(NSError **)error;
- (NSDictionary *)updateDiscussionMessageWithClassName:(NSString *)className classPK:(long long)classPK messageId:(long long)messageId subject:(NSString *)subject body:(NSString *)body serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;
- (NSDictionary *)updateMessageWithMessageId:(long long)messageId subject:(NSString *)subject body:(NSString *)body inputStreamOVPs:(NSArray *)inputStreamOVPs existingFiles:(NSArray *)existingFiles priority:(double)priority allowPingbacks:(BOOL)allowPingbacks serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;
- (NSString *)getCategoryMessagesRSSWithGroupId:(long long)groupId categoryId:(long long)categoryId status:(int)status max:(int)max type:(NSString *)type version:(double)version displayStyle:(NSString *)displayStyle feedURL:(NSString *)feedURL entryURL:(NSString *)entryURL themeDisplay:(NSDictionary *)themeDisplay error:(NSError **)error;
- (NSString *)getCompanyMessagesRSSWithCompanyId:(long long)companyId status:(int)status max:(int)max type:(NSString *)type version:(double)version displayStyle:(NSString *)displayStyle feedURL:(NSString *)feedURL entryURL:(NSString *)entryURL themeDisplay:(NSDictionary *)themeDisplay error:(NSError **)error;
- (NSString *)getGroupMessagesRSSWithGroupId:(long long)groupId userId:(long long)userId status:(int)status max:(int)max type:(NSString *)type version:(double)version displayStyle:(NSString *)displayStyle feedURL:(NSString *)feedURL entryURL:(NSString *)entryURL themeDisplay:(NSDictionary *)themeDisplay error:(NSError **)error;
- (NSString *)getGroupMessagesRSSWithGroupId:(long long)groupId status:(int)status max:(int)max type:(NSString *)type version:(double)version displayStyle:(NSString *)displayStyle feedURL:(NSString *)feedURL entryURL:(NSString *)entryURL themeDisplay:(NSDictionary *)themeDisplay error:(NSError **)error;
- (NSNumber *)getThreadAnswersCountWithGroupId:(long long)groupId categoryId:(long long)categoryId threadId:(long long)threadId error:(NSError **)error;
- (NSString *)getThreadMessagesRSSWithThreadId:(long long)threadId status:(int)status max:(int)max type:(NSString *)type version:(double)version displayStyle:(NSString *)displayStyle feedURL:(NSString *)feedURL entryURL:(NSString *)entryURL themeDisplay:(NSDictionary *)themeDisplay error:(NSError **)error;

@end