#ifndef REQUESTS_OPTIONS_HEADERS_HPP
#define REQUESTS_OPTIONS_HEADERS_HPP

#include <string>
#include <string_view>
#include <unordered_map>

#include "requests/detail/enum.hpp"


namespace Requests {

namespace Detail {
    // Inheritable enum class
    struct Header_Helper
    {
        // Possible headers
        enum enum_t {
            unknown = 0,

            a_im,
            accept,
            accept_additions,
            accept_charset,
            accept_datetime,
            accept_encoding,
            accept_features,
            accept_language,
            accept_patch,
            accept_post,
            accept_ranges,
            access_control,
            access_control_allow_credentials,
            access_control_allow_headers,
            access_control_allow_methods,
            access_control_allow_origin,
            access_control_expose_headers,
            access_control_max_age,
            access_control_request_headers,
            access_control_request_method,
            age,
            allow,
            alpn,
            also_control,
            alt_svc,
            alt_used,
            alternate_recipient,
            alternates,
            apparently_to,
            apply_to_redirect_ref,
            approved,
            archive,
            archived_at,
            article_names,
            article_updates,
            authentication_control,
            authentication_info,
            authentication_results,
            authorization,
            auto_submitted,
            autoforwarded,
            autosubmitted,
            base,
            bcc,
            body,
            c_ext,
            c_man,
            c_opt,
            c_pep,
            c_pep_info,
            cache_control,
            caldav_timezones,
            cancel_key,
            cancel_lock,
            cc,
            close,
            comments,
            compliance,
            connection,
            content_alternative,
            content_base,
            content_description,
            content_disposition,
            content_duration,
            content_encoding,
            content_features,
            content_id,
            content_identifier,
            content_language,
            content_length,
            content_location,
            content_md5,
            content_range,
            content_return,
            content_script_type,
            content_style_type,
            content_transfer_encoding,
            content_type,
            content_version,
            control,
            conversion,
            conversion_with_loss,
            cookie,
            cookie2,
            cost,
            dasl,
            date,
            date_received,
            dav,
            default_style,
            deferred_delivery,
            delivery_date,
            delta_base,
            depth,
            derived_from,
            destination,
            differential_id,
            digest,
            discarded_x400_ipms_extensions,
            discarded_x400_mts_extensions,
            disclose_recipients,
            disposition_notification_options,
            disposition_notification_to,
            distribution,
            dkim_signature,
            dl_expansion_history,
            downgraded_bcc,
            downgraded_cc,
            downgraded_disposition_notification_to,
            downgraded_final_recipient,
            downgraded_from,
            downgraded_in_reply_to,
            downgraded_mail_from,
            downgraded_message_id,
            downgraded_original_recipient,
            downgraded_rcpt_to,
            downgraded_references,
            downgraded_reply_to,
            downgraded_resent_bcc,
            downgraded_resent_cc,
            downgraded_resent_from,
            downgraded_resent_reply_to,
            downgraded_resent_sender,
            downgraded_resent_to,
            downgraded_return_path,
            downgraded_sender,
            downgraded_to,
            ediint_features,
            eesst_version,
            encoding,
            encrypted,
            errors_to,
            etag,
            expect,
            expires,
            expiry_date,
            ext,
            followup_to,
            forwarded,
            from,
            generate_delivery_report,
            getprofile,
            hobareg,
            host,
            http2_settings,
            if_,
            if_match,
            if_modified_since,
            if_none_match,
            if_range,
            if_schedule_tag_match,
            if_unmodified_since,
            im,
            importance,
            in_reply_to,
            incomplete_copy,
            injection_date,
            injection_info,
            jabber_id,
            keep_alive,
            keywords,
            label,
            language,
            last_modified,
            latest_delivery_time,
            lines,
            link,
            list_archive,
            list_help,
            list_id,
            list_owner,
            list_post,
            list_subscribe,
            list_unsubscribe,
            list_unsubscribe_post,
            location,
            lock_token,
            man,
            max_forwards,
            memento_datetime,
            message_context,
            message_id,
            message_type,
            meter,
            method_check,
            method_check_expires,
            mime_version,
            mmhs_acp127_message_identifier,
            mmhs_authorizing_users,
            mmhs_codress_message_indicator,
            mmhs_copy_precedence,
            mmhs_exempted_address,
            mmhs_extended_authorisation_info,
            mmhs_handling_instructions,
            mmhs_message_instructions,
            mmhs_message_type,
            mmhs_originator_plad,
            mmhs_originator_reference,
            mmhs_other_recipients_indicator_cc,
            mmhs_other_recipients_indicator_to,
            mmhs_primary_precedence,
            mmhs_subject_indicator_codes,
            mt_priority,
            negotiate,
            newsgroups,
            nntp_posting_date,
            nntp_posting_host,
            non_compliance,
            obsoletes,
            opt,
            optional,
            optional_www_authenticate,
            ordering_type,
            organization,
            origin,
            original_encoded_information_types,
            original_from,
            original_message_id,
            original_recipient,
            original_sender,
            original_subject,
            originator_return_address,
            overwrite,
            p3p,
            path,
            pep,
            pep_info,
            pics_label,
            position,
            posting_version,
            pragma,
            prefer,
            preference_applied,
            prevent_nondelivery_report,
            priority,
            privicon,
            profileobject,
            protocol,
            protocol_info,
            protocol_query,
            protocol_request,
            proxy_authenticate,
            proxy_authentication_info,
            proxy_authorization,
            proxy_connection,
            proxy_features,
            proxy_instruction,
            public_,
            public_key_pins,
            public_key_pins_report_only,
            range,
            received,
            received_spf,
            redirect_ref,
            references,
            referer,
            referer_root,
            relay_version,
            reply_by,
            reply_to,
            require_recipient_valid_since,
            resent_bcc,
            resent_cc,
            resent_date,
            resent_from,
            resent_message_id,
            resent_reply_to,
            resent_sender,
            resent_to,
            resolution_hint,
            resolver_location,
            retry_after,
            return_path,
            safe,
            schedule_reply,
            schedule_tag,
            sec_fetch_dest,
            sec_fetch_mode,
            sec_fetch_site,
            sec_fetch_user,
            sec_websocket_accept,
            sec_websocket_extensions,
            sec_websocket_key,
            sec_websocket_protocol,
            sec_websocket_version,
            security_scheme,
            see_also,
            sender,
            sensitivity,
            server,
            set_cookie,
            set_cookie2,
            setprofile,
            sio_label,
            sio_label_history,
            slug,
            soapaction,
            solicitation,
            status_uri,
            strict_transport_security,
            subject,
            subok,
            subst,
            summary,
            supersedes,
            surrogate_capability,
            surrogate_control,
            tcn,
            te,
            timeout,
            title,
            to,
            topic,
            trailer,
            transfer_encoding,
            ttl,
            ua_color,
            ua_media,
            ua_pixels,
            ua_resolution,
            ua_windowpixels,
            upgrade,
            urgency,
            uri,
            user_agent,
            variant_vary,
            vary,
            vbr_info,
            version,
            via,
            want_digest,
            warning,
            www_authenticate,
            x_archived_at,
            x_device_accept,
            x_device_accept_charset,
            x_device_accept_encoding,
            x_device_accept_language,
            x_device_user_agent,
            x_frame_options,
            x_mittente,
            x_pgp_sig,
            x_ricevuta,
            x_riferimento_message_id,
            x_tiporicevuta,
            x_trasporto,
            x_verificasicurezza,
            x400_content_identifier,
            x400_content_return,
            x400_content_type,
            x400_mts_identifier,
            x400_originator,
            x400_received,
            x400_recipients,
            x400_trace,
            xref
        };
    };

    template<>
    struct Enum_Range<Header_Helper::enum_t>
    {
        static constexpr auto min = 0;
        static constexpr auto max = 356;
    };


    // Case insensitive (+ '-' == '_') comparator for header names
    struct Header_Name_Equal
    {
        constexpr bool operator()(std::string_view lhs, std::string_view rhs) const noexcept
        {
            if (lhs.size() != rhs.size()) { return false; }

            for (size_t i = 0; i < lhs.size(); ++i)
            {
                auto c1 = ('A' <= lhs[i] && lhs[i] <= 'Z') ? (lhs[i] - 'A' + 'a') : lhs[i];
                auto c2 = ('A' <= rhs[i] && rhs[i] <= 'Z') ? (rhs[i] - 'A' + 'a') : rhs[i];

                if (c1 == '_') { c1 = '-'; }
                if (c2 == '_') { c2 = '-'; }

                if (c1 != c2) { return false; }
            }

            return true;
        }
    };

} // namespace Detail



// Enum wrapper for header name
struct Header
    : public Detail::Header_Helper,
      public Detail::Enum<Detail::Header_Helper::enum_t, Detail::Header_Name_Equal>
{
    using Detail::Enum<Detail::Header_Helper::enum_t, Detail::Header_Name_Equal>::Enum;


    [[nodiscard, deprecated("Doesn't change '_' to '-'. Use to_string() instead!")]]
    constexpr std::string_view to_view() const { return Enum::to_view(); }

    // Get header name with '_' replaced by '-'
    [[nodiscard]] std::string to_string() const
    {
        auto n = Enum::to_string();

        std::transform(
            n.begin(), n.end(),
            n.begin(), [](char c){ return (c == '_') ? '-' : c; }
        );

        return n;
    }
};


// Collection of HTTP headers
struct Headers : std::unordered_map<Header, std::string, std::hash<int>>
{
    using std::unordered_map<Header, std::string, std::hash<int>>::unordered_map;
};

} // namespace Requests

#endif // REQUESTS_OPTIONS_HEADERS_HPP